#include <iostream>
#include < algorithm >

using namespace std;

#define SIZE 14
#define Allowed_PRAWAS 3 //weekly
#define NO_OF_SHAKHA 8

char shakha[][256] = { "Madhav",
					   "shivaji",
					   "maharana pratap",
					   "vivekanand",
					   "veer sawarkar",
					   "gora badal",
					   "shree Ram",
					   "Durga"			
					  };

struct _KARYAKARTA {
	char name[256];
};


//char karykarta[][256] = { 
_KARYAKARTA karykarta[SIZE] = {
							"virendra ji",
							"neeraj ji",
							"ajay ji",
							"mananiya chandra mohan ji",
							"rammurty ji",
							"surendra ji",
							"abhilash ji",
							"pramod ji",
							"dharmveer ji",
							"lavesh ji",
							"manoj ji",
							"vimal ji",
							"dhruv ji",
							"manish ji"
						};

static int start_date = 1;
static int end_date=30;
static int week_end1 = 4;
static int week_end2 = 5;



int visited[SIZE] = { 0 };
int week_visitied[SIZE] = { 0 };

bool bdone = false;
int day = 0;
bool found = false;
int remaing_for_prawas = SIZE;
int shakha_limit = NO_OF_SHAKHA;

bool isVisitAllowed(int ii, int prawas_karyakarta_index[8],bool found)
{
	if (!found)
		return true;

	bool bret = true;
	if (ii < 0)
	{
		return bret;
	}
	for (int i = ii; i >= 0;i--)
	{//issue
		if (week_visitied[prawas_karyakarta_index[i]] >= Allowed_PRAWAS)
		{
			bret = false;
			break;
		}
	}
	return bret;
}

void check(int count, int index, char prawas[][256],int prawas_karyakarta_index[8])
{
	//if (count == NO_OF_SHAKHA)
	if (index == SIZE - 1 && count != shakha_limit)
	{
		//shakha_limit--;
		shakha_limit = count;
	}
	if (index == SIZE - 2 && week_visitied [SIZE-1]>= Allowed_PRAWAS && count != shakha_limit)
	{
		shakha_limit = count;
	}
	
	if( count == shakha_limit)
	{
		for (int i = 0; i < shakha_limit; i++)
			cout << prawas[i] << " ";
		cout << endl;
		day++;
		found = true;

		if (remaing_for_prawas < shakha_limit) 
			shakha_limit = remaing_for_prawas;
		
		if (day == 5)
		{
			bdone = true;
		}
		return;
	}
	for (int i = 0; i < SIZE; i++) {
		
		if (bdone)
		{
			break;
		}
		
		if (!visited[i]  && isVisitAllowed(count - 1, prawas_karyakarta_index,found) && week_visitied[i] < Allowed_PRAWAS)
		{
			visited[i]++;
			week_visitied[i]++;
			remaing_for_prawas = (week_visitied[i] == Allowed_PRAWAS) ? (remaing_for_prawas - 1) : remaing_for_prawas;
			
			if (found)

			{
				found = false;

				for (int ii = count-1; ii >= 0;ii--)
				{
					week_visitied[prawas_karyakarta_index[ii]]++;
					remaing_for_prawas = (week_visitied[prawas_karyakarta_index[ii]] == Allowed_PRAWAS) ? (remaing_for_prawas - 1) : remaing_for_prawas;
				}

			}
						
			//num[count] = arr[i];
			strcpy(prawas[count], karykarta[i].name);
			prawas_karyakarta_index[count] = i;
			check(count + 1, i, prawas, prawas_karyakarta_index);
			visited[i]--;

			strcpy(prawas[count],"");
			prawas_karyakarta_index[count] = 0;
			
		}
	}
}

int main()
{
	char prawas[NO_OF_SHAKHA][256] = {0};
	int prawas_karyakarta_index[NO_OF_SHAKHA] = { 0 };
	int count = 0;
	
	std::random_shuffle(std::begin(karykarta), std::end(karykarta));
	std::random_shuffle(std::begin(karykarta), std::end(karykarta));
	std::random_shuffle(std::begin(karykarta), std::end(karykarta));

	check(count, 0, prawas, prawas_karyakarta_index);

	return 0;
}
