void delen (double chisl_1, double chisl_2) {
    if (chisl_2 != 0){
        printf("Как скажешь, братан! :)\n");
        double otvet;
        otvet = chisl_1 / chisl_2;
        printf("Вычисления были успешно выполнены.\nОтвет:%lf", otvet);
    }
    else{
        printf("Вы записали, что второе число равняется:%lf. \n", chisl_2);
        printf("Но деление на ноль невозможно! \nПожалуйста, перезапустите программу :) \n");
    }
}
