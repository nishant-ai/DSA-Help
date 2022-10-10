#include<iostream>
using namespace std;
bool smp(int men, int women, void* x, void* y);
int main()
{
	int men,women;
	cout<<"Enter the number of men: -\n";
	cin>>men;
	cout<<"Enter the number of women: -\n";
	cin>>women;

	if(men != women)
	{
		cout<<"The number of men should be equal to the number of women.\n";
		return 0;
	}
	int array1[men][women];
	int array2[women][men];
	
	cout<<"Enter the preferences of men: -\n";
	for(int i=0;i<men;i++)
		for(int j=0;j<women;j++)
			cin>>array1[i][j];

	cout<<"Enter the preferences of women: -\n";
	for(int i=0;i<women;i++)
		for(int j=0;j<men;j++)
			cin>>array2[i][j];
	
	bool result;
	result = smp(men, women, array1, array2);
	if(result)
		cout<<"Marriage is stable.\n";
	else
		cout<<"Marriage is unstable.\n";
	return 0;
}

bool smp(int men, int women, void* x, void* y)
{
	int (*array1)[women] = static_cast<int (*)[women]>(x);
	int (*array2)[men] = static_cast<int (*)[men]>(y);
	
	int men_partner[men];
	int women_partner[women];
	for(int i=0;i<men;i++)
		men_partner[i] = -1;
	for(int i=0;i<women;i++)
		women_partner[i] = -1;

	int free_men = men;
	while(free_men> 0)
	{
		int proposing_man;
		for(proposing_man=0;proposing_man<men;proposing_man++)
		{
			if(men_partner[proposing_man]==-1)
				break;
		}
		
		for(int i=0;(i<men && men_partner[proposing_man] == -1);i++)
		{
			int proposed_woman = array1[proposing_man][i];

			if(women_partner[proposed_woman] == -1)
			{
				women_partner[proposed_woman] = proposing_man;
				men_partner[proposing_man] = proposed_woman;
				free_men--;
			}
			else
			{
				bool is_better_proposal{false};

				for(int i=0;i<men;i++)
				{
					if(array2[proposed_woman][i] == women_partner[proposed_woman])
					{
						is_better_proposal = false;
						break;
					}
					if(array2[proposed_woman][i] == proposing_man)
					{
						is_better_proposal = true;
						break;
					}
				}
				
				if(is_better_proposal == true)
				{
					men_partner[(women_partner[proposed_woman])] = -1;
					women_partner[proposed_woman]=proposing_man;
					men_partner[proposing_man] = proposed_woman;
				}
			}
		}
	}

	cout<<"The women's optimal solution is: -\n";
	for(int i=0;i<women;i++)
		cout<<"Women "<<i<<"----Man "<<women_partner[i]<<"\n";	

	int men_partner1[men];
	int women_partner1[women];
	
	for(int i=0;i<men;i++)
		men_partner1[i] = -1;
	for(int i=0;i<women;i++)
		women_partner1[i] = -1;

	int free_women = women;

	while(free_women > 0)
	{
		int proposing_woman;
		for(proposing_woman=0;proposing_woman<women;proposing_woman++)
		{
			if(women_partner1[proposing_woman] == -1)
			break;
		}

		for(int i=0;(i<women && women_partner1[proposing_woman] == -1);i++)
		{
			int proposed_man = array2[proposing_woman][i];

			if(men_partner1[proposed_man] == -1)
			{
				men_partner1[proposed_man]= proposing_woman;
				women_partner1[proposing_woman] = proposed_man;
				free_women--;
			}
			else
			{
				bool is_better_proposal{false};

				for(int i=0;i<women;i++)
				{
					if(array1[proposed_man][i] == men_partner1[proposed_man])
					{
						is_better_proposal = false;
						break;
					}
					if(array1[proposed_man][i] == proposing_woman)
					{
						is_better_proposal = true;
						break;
					}
				}
				
				if(is_better_proposal == true)
				{
					women_partner1[men_partner1[proposed_man]] = -1;
					men_partner1[proposed_man] = proposing_woman;
					women_partner1[proposing_woman] = proposed_man;
				}
			  }
		}
	}
	cout<<"\nThe men's optimal solution is: -\n";
	for(int i=0;i<women;i++)
		cout<<"Man "<<i<<"---Woman "<<men_partner1[i]<<"\n";
	
	int counter{};
	for(int i=0;i<women;i++)
		if(women_partner[i] == women_partner1[i])
			++counter;
	if(counter == women)
		return true;
	else
		return false;
}
