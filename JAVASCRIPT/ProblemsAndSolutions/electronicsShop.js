const budget = 10;
const keyboardPrice = [3, 1];
const usbDrivesPrice = [5, 2, 8];

let maxMoneySpent = 0;

for (let i=0;i<keyboardPrice.length;i++) {
    for (let j=0;j<usbDrivesPrice.length;j++) {
        if ((keyboardPrice[i] + usbDrivesPrice[j]) < budget && (keyboardPrice[i] + usbDrivesPrice[j]) > maxMoneySpent)
                maxMoneySpent = keyboardPrice[i] + usbDrivesPrice[j];
    }
}

console.log(maxMoneySpent)