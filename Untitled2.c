#include <stdio.h>
main()
{
	int fahr , celsius;
	int lower , upper , step;
	lower=300;
	upper =0;
	step=20;
	celsius=lower ;
	printf ( "CELSIUS - FAHRENHEIT \n" );
	while(celsius>=upper){
		fahr =(9*celsius +160)/5;
		printf ("%d\t       %d\n", celsius, fahr);
		celsius=celsius-step;
	}
}

main()
{
    int c, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
