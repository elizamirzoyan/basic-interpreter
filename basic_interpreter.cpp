#include<iostream>
#include<fstream>
#include<string>
#include<cstring>


std::string toxi_skizb(std::string str)
{
   int index,jindex;
              int skizb_index=0;
            if(skizb_index != std::string::npos)
              {
                index=skizb_index;
              }
               int whitespace_index=str.find(" ");
            if(whitespace_index != std::string::npos)
              {
                jindex=whitespace_index;
              }
          std::string skzbi_mas=str.substr(index,jindex-index);
            return skzbi_mas;
}

bool sentence_end(std::string str)
{
    if(str.find(";") != std::string::npos)
      {
	return true;
      }
	return false;
}

std::string arjeqi_pokum(std::string str)
{
      int index,jindex;
      std::size_t havasar_index=str.find(":= ");
            if(havasar_index != std::string::npos)
	      {
                index=havasar_index;
	      }
      std::size_t ketstor_index=str.find(" ;");
            if(ketstor_index != std::string::npos)
              {
                jindex=ketstor_index;
	      }
       std::string arjeq=str.substr(index+3,jindex-(index+3));
	    return arjeq;
}

std::string tesakner(std::string str)
{
	std::string tesak;
	std::string arjeq=arjeqi_pokum(str);
	for(int i=0;i<arjeq.length();++i)
	{
	     if(isdigit(arjeq[i])&&!(arjeq.find(".")!=std::string::npos ))       
	     {
	       tesak="int";
	     }
		     else
		     {
	 if(isdigit(arjeq[i])&&(arjeq.find(".")!=std::string::npos))//sizeof-i pahy amenayn havanakanutyamb sxal a
                           {
                                 tesak="double";
                               }
			    else{
	                          if(!(isdigit(arjeq[i])))
                                     {
                                            tesak="char";
                                      }
	                     }}
                                	     }
           return tesak;
}

std::string anuni_payman(std::string str)
{
	int index,jindex;
              int skizb_index=0;
            if(skizb_index != std::string::npos)
              {
                index=skizb_index;
              }
               int havasar_index=str.find(" :=");
            if(havasar_index != std::string::npos)
              {
                jindex=havasar_index;
              }
           std::string anun=str.substr(index,jindex-index);
	    if(isdigit(anun[0]))
              {
		    std::cout<<"Error: there is smth wrong with your variable name(you most probably started your variable name with a number)";
              }
	return anun;
}

int stringic_integer(std::string str)
{
   int tiv=0;
	   for(int i=0;i<str.length();++i)
	   {
		   tiv=tiv*10+(int(str[i])-48);
	   }
return tiv;
}

std::string sum_int1 (std::string str)
{       
        int index,jindex;
      std::size_t havasar_index=str.find(":= ");
            if(havasar_index != -1)
              {
                index=havasar_index;
              }
      std::size_t nshan_index=str.find(" +");
            if(nshan_index != -1)
              {
                jindex=nshan_index;
              }
     std::string arjeq=str.substr(index+3,jindex-(index+3));
   return arjeq;
}

std::string sum_int2 (std::string str)
{
        int index,jindex;
      std::size_t nshan_index=str.find("+ ");
            if(nshan_index != -1)
              {
                index=nshan_index;
              }
      std::size_t ketstor_index=str.find(" ;");
            if(ketstor_index !=-1)
              { 
                jindex=ketstor_index;
              }
       std::string arjeq=str.substr(index+2,jindex-(index+2));
            return arjeq;
}

std::string baj_int1 (std::string str)
{
        int index,jindex;
      std::size_t havasar_index=str.find(":= ");
            if(havasar_index != -1)
              {
                index=havasar_index;
              }
      std::size_t nshan_index=str.find(" /");
            if(nshan_index != -1)
              {
                 jindex=nshan_index;
              }
     std::string arjeq=str.substr(index+3,jindex-(index+3));
            return arjeq;
}

std::string baj_int2 (std::string str)
{
        int index,jindex;
      std::size_t nshan_index=str.find("/ ");
            if(nshan_index != -1)
              {
                index=nshan_index;
              }
       std::size_t ketstor_index=str.find(" ;");
            if(ketstor_index != -1)
              {
                 jindex=ketstor_index;
              }
      std::string arjeq=str.substr(index+2,jindex-(index+2));
            return arjeq;
}

std::string baz_int1 (std::string str)
{
        int index,jindex;
      std::size_t havasar_index=str.find(":= ");
            if(havasar_index != -1)
              {
                index=havasar_index;
              }
       std::size_t nshan_index=str.find(" *");
            if(nshan_index != -1)
              { 
                 jindex=nshan_index;
              }
       std::string arjeq=str.substr(index+3,jindex-(index+3));
            return arjeq;
}

std::string baz_int2 (std::string str)
{
        int index,jindex;
      std::size_t nshan_index=str.find("* ");
            if(nshan_index != -1)
              {
                 index=nshan_index;
              }
      std::size_t ketstor_index=str.find(" ;");
            if(ketstor_index != -1)
              {
                jindex=ketstor_index;
              }
        std::string arjeq=str.substr(index+2,jindex-(index+2));
            return arjeq;
}

std::string han_int1 (std::string str)
{
        int index,jindex;
      std::size_t havasar_index=str.find(":= ");
            if(havasar_index != -1)
              {
                 index=havasar_index;
              }
       std::size_t nshan_index=str.find(" -");
            if(nshan_index != -1)
              { 
                jindex=nshan_index;
              }
      std::string arjeq=str.substr(index+3,jindex-(index+3));
            return arjeq;
}

std::string han_int2 (std::string str)
{
        int index,jindex;
      std::size_t nshan_index=str.find("- ");
            if(nshan_index != -1)
              {
                 index=nshan_index;
              }
      std::size_t ketstor_index=str.find(" ;");
            if(ketstor_index != -1)
              {
                 jindex=ketstor_index;
              }
      std::string arjeq=str.substr(index+2,jindex-(index+2));
            return arjeq;
}

std::string mn_baj_int1 (std::string str)
{
        int index,jindex;
      std::size_t havasar_index=str.find(":= ");
            if(havasar_index != -1)
              {
                index=havasar_index;
              }
      std::size_t nshan_index=str.find(" %");
            if(nshan_index != -1)
              {
                 jindex=nshan_index;
              }  
      std::string arjeq=str.substr(index+3,jindex-(index+3));
            return arjeq;
}

std::string mn_baj_int2 (std::string str)
{
        int index,jindex;
      std::size_t nshan_index=str.find("% ");
            if(nshan_index != -1)
              { 
                 index=nshan_index;
              }
      std::size_t ketstor_index=str.find(" ;");
            if(ketstor_index != -1)
              { 
                  jindex=ketstor_index;
              }
       std::string arjeq=str.substr(index+2,jindex-(index+2));
            return arjeq;
}

bool is_integer(std::string a)
{
	for(int i=0; i< a.length(); i++)
	{
		if(!isdigit(a[i])) return false;
	}
	return true;
}

void gumarum(std::string str)
{
 std::string a=arjeqi_pokum(str);
 if(a.find("+")!= -1)
 {
	if(tesakner(sum_int1(str))=="int" && tesakner(sum_int2(str))=="int")
			 {
			 std::cout<< std::stoi(sum_int1(str))+std::stoi(sum_int2(str))<<std::endl;
			 }
	else {	
	  if(tesakner(sum_int1(str))=="double" && tesakner(sum_int2(str))=="double")
                         {
                         std::cout<< std::stod(sum_int1(str))+std::stod(sum_int2(str))<<std::endl;
                         }
	  else{
	    if(tesakner(sum_int1(str))=="double" && tesakner(sum_int2(str))=="int")
                         {
                         std::cout<< std::stod(sum_int1(str))+std::stoi(sum_int2(str))<<std::endl;
                         }
	    else{
	          if(tesakner(sum_int1(str))=="int" && tesakner(sum_int2(str))=="double")
                         {
                          std::cout<< std::stoi(sum_int1(str))+std::stod(sum_int2(str))<<std::endl;
                         }
		  else std::cout<<"this interpreter isn't smart enough to sum char";
	    }
	  }
	}
     }
}

void bajanum(std::string str)
{
std::string a=arjeqi_pokum(str);
 if(a.find("/")!= std::string::npos)
 {
        if(tesakner(baj_int1(str))=="int" && tesakner(baj_int2(str))=="int")
                         {
                        std::cout<< std::stoi(baj_int1(str)) / std::stoi(baj_int2(str))<<std::endl;
                         }
        else {
          if(tesakner(baj_int1(str))=="double" && tesakner(baj_int2(str))=="double")
                         {
                         std::cout<< std::stod(baj_int1(str)) / std::stod(baj_int2(str))<<std::endl;
                         }
          else{
            if(tesakner(baj_int1(str))=="double" && tesakner(baj_int2(str))=="int")
                         {
                         std::cout<< std::stod(baj_int1(str)) / std::stoi(baj_int2(str))<<std::endl;
                         }
            else{
                  if(tesakner(baj_int1(str))=="int" && tesakner(baj_int2(str))=="double")
                         {
                         std::cout<< std::stoi(baj_int1(str)) / std::stod(baj_int2(str))<<std::endl;
                         }
                  else std::cout<<"this interpreter isn't smart enough to bajanel  char";
            }
          }
        }
 }
}

void bazmapatkum(std::string str)
{
std::string a=arjeqi_pokum(str);
 if(a.find("*")!= std::string::npos)
 {
          if(tesakner(baz_int1(str))=="int" && tesakner(baz_int2(str))=="int")
                         {
                         std::cout<< std::stoi(baz_int1(str))*std::stoi(baz_int2(str))<<std::endl;
                         }
        else {
          if(tesakner(baz_int1(str))=="double" && tesakner(baz_int2(str))=="double")
                         {
                         std::cout<< std::stod(baz_int1(str))*std::stod(baz_int2(str))<<std::endl;
                         }
          else{
            if(tesakner(baz_int1(str))=="double" && tesakner(baz_int2(str))=="int")
                         {
                         std::cout<< std::stod(baz_int1(str))*std::stoi(baz_int2(str))<<std::endl;
                         }
            else{
                  if(tesakner(baz_int1(str))=="int" && tesakner(baz_int2(str))=="double")
                         {
                         std::cout<< std::stoi(baz_int1(str))*std::stod(baz_int2(str))<<std::endl;
                         }
                  else std::cout<<"this interpreter isn't smart enough to multiply  char";
            }
          }
    	}
     }
  }

void hanum(std::string str)
{
std::string a=arjeqi_pokum(str);
 if(a.find("-")!= -1)
 {
    if(tesakner(han_int1(str))=="int" && tesakner(han_int2(str))=="int")
                         {
                         std::cout<< std::stoi(han_int1(str)) - std::stoi(han_int2(str))<<std::endl;
                         }
        else {
          if(tesakner(han_int1(str))=="double" && tesakner(han_int2(str))=="double")
                         {
                         std::cout<< std::stod(han_int1(str)) - std::stod(han_int2(str))<<std::endl;
                         }
          else{
            if(tesakner(han_int1(str))=="double" && tesakner(han_int2(str))=="int")
                         {
                          std::cout<< std::stod(han_int1(str)) - std::stoi(han_int2(str))<<std::endl;
                         }
            else{
                  if(tesakner(han_int1(str))=="int" && tesakner(han_int2(str))=="double")
                         {
                         std::cout<< std::stoi(han_int1(str)) - std::stod(han_int2(str))<<std::endl;
                         }
                  else std::cout<<"this interpreter isn't smart enough to hanel char";
            }
          }
       }
    }
 }

void mnac_baj(std::string str)
{
std::string a=arjeqi_pokum(str);
if(a.find("%")!= std::string::npos)
{
if(tesakner(mn_baj_int1(str))=="int" && tesakner(mn_baj_int2(str))=="int")
                         {
                         std::cout<< std::stoi(mn_baj_int1(str)) % std::stoi(mn_baj_int2(str))<<std::endl;
                         }
        else {
          if(tesakner(mn_baj_int1(str))=="double" && tesakner(mn_baj_int2(str))=="double")
                         {
                         std::cout<< "Error:you can't devide double numbers"<<std::endl;
                         }
          else{
            if(tesakner(mn_baj_int1(str))=="double" && tesakner(mn_baj_int2(str))=="int")
                         {
                         std::cout<< "Error:You cant devide double numbers"<<std::endl;
                         }
            else{
                  if(tesakner(mn_baj_int1(str))=="int" && tesakner(mn_baj_int2(str))=="double")
                         {
                         std::cout<< "Error:you cant devide double numbers"<<std::endl;
                         }
                  else std::cout<<"Error:this interpreter isn't smart enough to mnacordov devide anel char";
            }
          }
 }
}
}

void arithmetic(std::string str)
{
    if(str.find("+")!=-1)
      {
        gumarum(str);
      }
    if(str.find("-")!=-1)
      {
        hanum(str);
      } 
    if(str.find("*")!=-1)
      {
         bazmapatkum(str);
      }
     if(str.find("/")!=-1)
      {
        bajanum(str);
      }
     if(str.find("%")!=-1)
      {
        mnac_baj(str);
      }
}

bool is_condition_right(std::string str)
{
            if(str.find("( ")!= -1 && str.find(" )")!=-1)
              {
               return true;
              } 
 return false;

}

std::string translate(std::string str)
{
    std::string bar;
    if(toxi_skizb(str)=="ete")
    {
	    if(sentence_end(str)==false && is_condition_right(str)==true)
		     bar="if";
    }
    if(toxi_skizb(str)=="ptutik")
    {
          if(sentence_end(str)==false && is_condition_right(str)==true)
                     bar="for";
    }
    if(toxi_skizb(str)=="ptutak")
    {
	    if(sentence_end(str)==false && is_condition_right(str)==true)
                     bar="while";
    }
    return bar;
}

bool translate_payman(std::string str)
{
if(str.find("ete")!=std::string::npos || str.find("ptutak")!=std::string::npos || str.find("ptutik")!=std::string::npos)
  {
     if(str.find("(") !=std::string::npos && str.find(")")!=std::string::npos )
         return true;       
  }
return false;
}

std::string inside_condition(std::string str)
{
 int index,jindex;
         std::size_t bracket1_index=str.find("( ");
            if(bracket1_index != -1)
              {
                 index=bracket1_index;
              }  
         std::size_t bracket2_index=str.find(" )");
            if(bracket2_index != -1)
              {
                 jindex=bracket2_index;
              }
         std::string arjeq=str.substr(index+2,jindex-(index+2));
            return arjeq;
}

bool  cmp_operand_eq(std::string str)
{
  std::string a=inside_condition(str);
  if(a.find("==")!= std::string::npos)
  {           int index, jindex;
	std::size_t bracket_index=str.find("( ");
        if(bracket_index != -1)
            {
              index=bracket_index;
            }     
         std::size_t havasar_index=str.find(" ==");
         if(havasar_index != -1)
            {
               jindex=havasar_index;
            }
        std::string arjeq=str.substr(index+2,jindex-(index+2));
           int index1, jindex1;
	std::size_t havasar_index1=str.find("== ");
        if(havasar_index1 != -1)
           {
             index1=havasar_index1;
           }
        std::size_t bracket_index1=str.find(" )");
           if( bracket_index1 != -1)
              {
                 jindex1=bracket_index1;
              }
       std::string arjeq1=str.substr(index1+3,jindex1-(index1+3));
	    if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="int")
                         {
                          if(std::stoi(arjeq)==std::stoi(arjeq1)) return true;
                         }
          if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="double")
                         {
                            if(std::stod(arjeq)==std::stod(arjeq1)) return true;
                         }
            if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="int")
                         {
                            if(std::stod(arjeq)==std::stoi(arjeq1)) return true;
                         }
                  if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="double")
                         {
                            if(std::stoi(arjeq)==std::stod(arjeq1)) return true;
                         }
  }
  return false;
}

bool  cmp_operand_mets(std::string str)
{
  std::string a=inside_condition(str);
  if(a.find(">")!= std::string::npos)
  {
              int index, jindex;
	std::size_t bracket_index=str.find("( ");
        if(bracket_index != -1)
          {
             index=bracket_index;
          }
       std::size_t nshan_index=str.find(" >");
         if(nshan_index != -1)
           {
             jindex=nshan_index;
           }
        std::string arjeq=str.substr(index+2,jindex-(index+2));
           int index1, jindex1;
	std::size_t nshan_index1=str.find("> ");
        if(nshan_index1 != std::string::npos)
          {
             index1=nshan_index1;
          }
         std::size_t bracket_index1=str.find(" )");
         if(bracket_index1 != -1)
           {
              jindex1=bracket_index1;
           }
        std::string arjeq1=str.substr(index1+2,jindex1-(index1+2));
	     if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="int")
                         {
                          if(std::stoi(arjeq)>std::stoi(arjeq1)) return true;
                         }
          if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="double")
                         {
                            if(std::stod(arjeq)>std::stod(arjeq1)) return true;
                         }
            if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="int")
                         {
                            if(std::stod(arjeq)>std::stoi(arjeq1)) return true;
                         }
                  if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="double")
                         {
                            if(std::stoi(arjeq)>std::stod(arjeq1)) return true;
                         }
  }
   return false;
}

bool  cmp_operand_mets_havasar(std::string str)
{
  std::string a=inside_condition(str);
  if(a.find(">=")!= std::string::npos)
  {
	  int index, jindex;
	std::size_t bracket_index=str.find("( ");
        if(bracket_index != -1)
           {
               index=bracket_index;
            }    
         std::size_t nshan_index=str.find(" >=");
            if(nshan_index != std::string::npos)
              {
                 jindex=nshan_index;
              }
       std::string arjeq=str.substr(index+2,jindex-(index+2));
           int index1, jindex1;
	std::size_t nshan_index1=str.find(">= ");
        if(nshan_index1 != std::string::npos)
          {
             index1=nshan_index1;
          }
         std::size_t bracket_index1=str.find(" )");
         if(bracket_index1 != std::string::npos)
           {
              jindex1=bracket_index1;
           }
      std::string arjeq1=str.substr(index1+3,jindex1-(index1+3));
	     if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="int")
                         {
                          if(std::stoi(arjeq)>=std::stoi(arjeq1)) return true;
                              else return false;
                         }
          if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="double")
                         {
                            if(std::stod(arjeq)>=std::stod(arjeq1)) return true;
                              else return false;
                         }
            if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="int")
                         {
                            if(std::stod(arjeq)>=std::stoi(arjeq1)) return true;
                              else return false;
                         }
                  if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="double")
                         {
                            if(std::stoi(arjeq)>=std::stod(arjeq1)) return true;
                              else return false;
                         }
  }
   return false;
}

bool  cmp_operand_poqr(std::string str)
{
  std::string a=inside_condition(str);
  if(a.find("<")!= std::string::npos)
  {
       	  int index, jindex;
	std::size_t bracket_index=str.find("( ");
        if(bracket_index != std::string::npos)
           {
              index=bracket_index;
           }
         std::size_t nshan_index=str.find(" <");
         if(nshan_index != std::string::npos)
           {
               jindex=nshan_index;
           }
       std::string arjeq=str.substr(index+2,jindex-(index+2));
           int index1, jindex1;
	std::size_t nshan_index1=str.find("< ");
        if(nshan_index1 != -1)
          {
              index1=nshan_index1;
          }       
         std::size_t bracket_index1=str.find(" )");
         if(bracket_index1 != -1)
           {
              jindex1=bracket_index1;
           }
         std::string arjeq1=str.substr(index1+2,jindex1-(index1+2));
    if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="int")
                         {
                          if(std::stoi(arjeq)<std::stoi(arjeq1)) return true;    
                         }
          if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="double")
                         {
                            if(std::stod(arjeq)<std::stod(arjeq1)) return true;
                         }
            if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="int")
                         {
                            if(std::stod(arjeq)<std::stoi(arjeq1)) return true;
                         }
                  if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="double")
                         {
                            if(std::stoi(arjeq)<std::stod(arjeq1)) return true;
                         }
  }
      return  false;
}

bool  cmp_operand_poqr_havasar(std::string str)
{
  std::string a=inside_condition(str);
  if(a.find("<=")!= std::string::npos)
  {
	  int index, jindex;
	std::size_t bracket_index=str.find("( ");
        if(bracket_index != -1)
          {
              index=bracket_index;
          }
       std::size_t nshan_index=str.find(" <=");
        if(nshan_index != -1)
          {
              jindex=nshan_index;
          }
           std::string arjeq=str.substr(index+2,jindex-(index+2));
           int index1, jindex1;
	std::size_t nshan_index1=str.find("<= ");
        if(nshan_index1 != -1)
          {
             index1=nshan_index1;
          }
         std::size_t bracket_index1=str.find(" )");
          if(bracket_index1 != -1)
            { 
                    jindex1=bracket_index1;
            }
   std::string arjeq1=str.substr(index1+3,jindex1-(index1+3));
 if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="int")
                         {
                          if(std::stoi(arjeq)<=std::stoi(arjeq1)) return true;
                         }
          if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="double")
                         {
                            if(std::stod(arjeq)<=std::stod(arjeq1)) return true;
                         }
            if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="int")
                         {
                            if(std::stod(arjeq)<=std::stoi(arjeq1)) return true;
                         }
                  if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="double")
                         {
                            if(std::stoi(arjeq)<=std::stod(arjeq1)) return true;
                         }
  }
   return false;
}

bool  cmp_operand_havasar_chi(std::string str)
{
  std::string a=inside_condition(str);
  if(a.find("!=")!= std::string::npos)
  {
              int index, jindex;
	std::size_t bracket_index=str.find("( ");
        if(bracket_index != -1)
          {
             index=bracket_index;
          } 
        std::size_t nshan_index=str.find(" !=");
        if(nshan_index != -1)
          {
              jindex=nshan_index; 
          }
        std::string arjeq=str.substr(index+2,jindex-(index+2));
           int index1, jindex1;
	std::size_t nshan_index1=str.find("!= ");
        if(nshan_index1 != -1)
          { 
            index1=nshan_index1;
          }
        std::size_t bracket_index1=str.find(" )");
         if(bracket_index1 != -1)
           {
             jindex1=bracket_index1;
           }
        std::string arjeq1=str.substr(index1+3,jindex1-(index1+3));
if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="int")
                          if(std::stoi(arjeq)!=std::stoi(arjeq1)) return true;
                         }
          if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="double")
                         {
                            if(std::stod(arjeq)!=std::stod(arjeq1)) return true;
                         }
            if(tesakner(arjeq)=="double" && tesakner(arjeq1)=="int")
                         {
                            if(std::stod(arjeq)!=std::stoi(arjeq1)) return true;
                         }
                  if(tesakner(arjeq)=="int" && tesakner(arjeq1)=="double")
                         {
                            if(std::stoi(arjeq)!=std::stod(arjeq1)) return true;
                         }
}
 return false;
}

bool brackets_condition(std::string str)
{
  if(str.find("ete")!=std::string::npos || str.find("ptutik")!=std::string::npos || str.find("ptutak")!=std::string::npos)
   {
    if(str.find("{")!=std::string::npos && str.find("}")!=std::string::npos) 
     {
        return true;
     }
   }
return false;
}

std::string inside_dzev(std::string str)
{
  int index, jindex;
        std::size_t bracket1_index=str.find("{ ");
        if(bracket1_index != -1)
          {
             index=bracket1_index;
          }
         std::size_t bracket2_index=str.find(" }");
         if(bracket2_index != -1)
           {
              jindex=bracket2_index;
           }
       std::string arjeq=str.substr(index+2,jindex-(index+2));
      return arjeq;
}

void hamematel(std::string str)
{
 if(cmp_operand_havasar_chi(str)==true ||cmp_operand_eq(str)==true ||cmp_operand_mets(str)==true ||cmp_operand_mets_havasar(str)==true||cmp_operand_poqr(str)==true ||cmp_operand_poqr_havasar(str)==true)
   {
     std::cout<<inside_dzev(str);
   } 
}

int main()
{
   std::ifstream this_file;
   this_file.open("syntax.txt");
   if(!this_file.is_open())
   {
       std::cout<<"Your file has faild to open";

   }
        std::string wstring = "";
	if(!this_file.eof())
	{

	while (getline(this_file, wstring))
	{
		std::cout<<wstring<<std::endl;
	}
	}
	std::cout <<"*"  << wstring << "*";
//if(sentence_end(wstring)==false);
  //  std::cout<<"Error: you forgot to put |;| in the end of the sentence";

/*if(anuni_payman(wstring)=="");
   {
 std::cout<<"Error: you forgot to put a name for your variable";
	exit(0);
}*/
if(tesakner(wstring)=="int");
{
    std::cout<<tesakner(wstring)<<" "<<anuni_payman(wstring)<<" ="<<" "<<stringic_integer(arjeqi_pokum(wstring))<<" ;"<<std::endl;
}
if(tesakner(wstring)=="double");
{
    std::cout<<tesakner(wstring)<<" "<<anuni_payman(wstring)<<" ="<<" "<<stod(arjeqi_pokum(wstring))<<" ;"<<std::endl;
}	
if(tesakner(wstring)=="char");
{
   std::cout<<tesakner(wstring)<<" "<<anuni_payman(wstring)<<" ="<<" "<<arjeqi_pokum(wstring)<<" ;"<<std::endl;
}
arithmetic (wstring);
if(toxi_skizb(wstring)=="ete" && translate_payman(wstring)==true)
{
    if(brackets_condition(wstring)!=true)
     { 
        std::cout<<"Error:You forgot to put brackets";
     }
    hamematel(wstring);
} 
   return 0;
}

