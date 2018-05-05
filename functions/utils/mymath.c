/*The following function calculates the simple interest when supplied with
principal, rate of interest and time*/

double SimpleInterest(double p, double roi, double time){
    double interest;
    interest = (p*roi*time)/100;
    return interest;
}
