// Copy range replacing value
// Copies the elements in the range [first,last) to the range beginning at result, replacing those for which pred 
// returns true by new_value.
template <class InputIterator, class OutputIterator, class UnaryPredicate, class T>
  OutputIterator replace_copy_if (InputIterator first, InputIterator last,
                                  OutputIterator result, UnaryPredicate pred,
                                  const T& new_value)
{
  while (first!=last) {
    *result = (pred(*first))? new_value: *first;
    ++first; ++result;
  }
  return result;
}