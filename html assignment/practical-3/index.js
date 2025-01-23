function calculate() {
    const num1 = parseFloat(document.getElementbyId("num1").value);
    const num2 = parseFloat(document.getElementbyId("num2").value);

    let result;
    switch (operation) {
        case "addition":
            result = num1 + num2;
            break;

        case "subraction":
            result = num1 - num2;
            break;

        case "multiplication":
            result = num1 * num2;
            break;

            if (num2 != 0) {
                result = num1 / num2;
            }
            else {
                result = "Cannot divide by zero";
            }
        default:
            result = "invalid operation";

    }

    document.getElementbyId("result").textContent = result;
}