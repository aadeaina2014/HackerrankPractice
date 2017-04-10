"""

/** 
 *@brief Title: Algorithm to determine if an angry professor will cancel a class 

Constraints
     ai <= 0 for early arrival 
     ai >=1 for late strudent arrival  

    + Output Format
    +  1<= T <=10
    +  1<= N <=1000
    +  1<= K <=N
    +  -100<= T <=100
    + For each test case, print the word YES if the class is canceled or NO if it is not. 

    +   author : Ayokunle Ade-Aina
    +  email: ayokunle.adeaina@gmail.com
    (c) April 10,2016
*/

"""

def check_range (num, lower_limit,upper_limit):
    if lower_limit <= num <= upper_limit:
        return True
    else :
        return False


def main():
    # my code here
    student_count = 0;
    
    number_of_test_cases  = int (raw_input("input number of test cases >>"))
    
    if check_range(number_of_test_cases,1,10)  :
        for idx in range(0,number_of_test_cases):
            num_students        = int (raw_input("input number of student>>"))
            test_case_threshold = int ( raw_input("input threshold for class>>"))
            student_list = list()
        
            if  check_range(num_students,1,1000) & check_range(test_case_threshold,1,num_students):
                for idx2 in range(0,num_students):
                    student_list.append(int (raw_input("input arrival time>>")))
                    
                for idx2 in range(0,num_students):
                    if check_range(student_list[idx2],-100,100) :
                        if  student_list[idx2] <=0 :
                            student_count = student_count + 1
                            
                if student_count >= test_case_threshold :
                    print"NO"
                else:
                    print "YES"
                    
     
    

if __name__ == "__main__":
    main()
    exit()