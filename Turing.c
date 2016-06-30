#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

#define TITLE(t)        system("title " ## #t)
#define CLS             system("cls")
#define MYDELAY(time)   system("ping 1 -n " ## #time ## " 2>nul 1>nul")
#define COLOR(c)        system("color 0" ## #c)
#define PAUSE           system("pause")

using std::string;
using std::cout;


void Display(void );

void show(const char *str){
	
	string ss = "color 00";
	char ch = '1';
	for(int i=0;str[i];++i)
		if(str[i]==' '||str[i]=='\n')
			putchar(str[i]);
		else{
				if(ch=='9'+1) ch='A';
				else if(ch=='G') ch='1'; 
				ss[7] = ch;
				system(ss.c_str());
		    	MYDELAY(1);
		    	putchar(str[i]);
				++ch;
		}
}


int main()
{


    PAUSE;

	CLS;

    TITLE(欢迎2013级图灵班学弟学妹们);
    
	COLOR(A);

	char *str = "                                                                                "
                "                                                                                "
                "                          *****   *****     *    *****                          "
                "                              *   *   *   * *        *                          "
                "                          *****   *   *     *    *****                          "
                "                          *       *   *     *        *                          "
                "                          *****   *****   *****  *****                          "
                "                                                                                "
                "                                                                                "
                "                                                         *                      "
                "             **************     *************            *                      "
			    "             *   *        *                 *     ****** * ******               "
				"             *   ******   *      ************       *    *   *                  "
				"             *  **   *    *                 *       *  * *   *                  "
				"             * *  * *     *     *************       *  * *   *                  "
			 	"             *     *      *           *             *  * *   *                  "
				"             *    * *     *           *           **** * * *****                "
				"             *   **  *    *      *    *    *        *  * *   *                  "
				"             *  *  *  *   *       **  *   **        * *  *   *                  "
				"             * *    *  *  *        * * * *          *    *   *                  "
				"             *    *  *    *          * *            *   *    *                  "
				"             *     *      *         *   *           *   *    *                  "
				"             *      *     *        *     **      *****  *    *                  "
                "             **************    ***        ***          *  *******               "            
                "                                                     *                          ";



	char * cheer = 
	        	"                                                                                "		
         		"                                                                                "		
         		"                                                                                "		
	        	"                          *                        *                            "
        		"                           *               *       *                            "
        		"                           *                **     *                            "
        		"                           *     *****       *     *                            " 
	        	"                        *******  *   *    *    *********                        "
	        	"                           *  *  *   *     **  *   *   *                        "
	        	"                           *  *  *   *      *  *   *   *                        "
	          	"                           *  *  *   *        **   *   *                        "
        		"                           *  *  *   *       * *   *   *                        "
	        	"                          *   *  *   *      *  *********                        "
	        	"                          *   *  *   *    ***  *   *   *                        "
	         	"                          *   *  *   *      *  *   *   *                        "
	        	"                          *   *  *   *      *  *   *   *                        "
	        	"                         *  * *  *****      *  *   *   *                        "
		        "                        *    *              *  *********                        "
	         	"                                                                                "
                "                                                        -----2012级图灵班       ";
	
	show(str);
    
    CLS;

	show(cheer);

    PAUSE;
	return 0;
}

void Display(void )
{
	CLS;

    char * str = 
"                                                                      "		
"                                                                      "		
"                                                                      "		
"                     *                        *                       "
"                      *               *       *                       "
"                      *                **     *                       "
"                      *     *****       *     *                       " 
"                   *******  *   *    *    *********                   "
"                      *  *  *   *     **  *   *   *                   "
"                      *  *  *   *      *  *   *   *                   "
"                      *  *  *   *        **   *   *                   "
"                      *  *  *   *       * *   *   *                   "
"                     *   *  *   *      *  *********                   "
"                     *   *  *   *    ***  *   *   *                   "
"                     *   *  *   *      *  *   *   *                   "
"                     *   *  *   *      *  *   *   *                   "
"                    *  * *  *****      *  *   *   *                   "
"                   *    *              *  *********                   "
"                                                                      "
"                                                    ----2012级图灵班  ";
    show(str);


}

