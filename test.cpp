/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	vector<int>::iterator iter;
	for(iter=A.begin();iter!=A.end();iter++){
	    if (A.at(iter)>A.at(iter+1)){
	        int temp=0;
	        temp=A.at(iter+1);
	        A.at(iter+1)=A.at(iter);
	        A.at(iter)=temp;
	    }
	}
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	vector<int>::iterator iter;
	for(iter=num.begin();iter!=num.end();iter++){
	    
	}
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	//Your code here
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	//Your code here
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	//Your code here
}
