#include <iostream>

using namespace std;

char shakha[][256] = { "Madhav",
					   "shivaji",
					   "maharana pratap",
					   "vivekanand",
					   "veer sawarkar",
					   "gora badal",
					   "shree Ram",
					   "Durga"			
					  };
char karykarta[][256] = { 
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

#define SIZE 14
#define Allowed_PRAWAS 2 //weekly

int visited[SIZE] = { 0 };
int week_visitied[SIZE] = { 0 };

bool bdone = false;
int day = 0;
bool found = false;

bool isVisitAllowed(int ii, int prawas_karyakarta_index[8])
{
	bool bret = true;
	for (int i = ii; i >= 0;i--)
	{
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
	if (count == 8)
	{
		for (int i = 0; i < count; i++)
			cout << prawas[i] << " ";
		cout << endl;
		day++;
		found = true;
		
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
		
		if (!visited[i] && isVisitAllowed(count, prawas_karyakarta_index) && week_visitied[i] < Allowed_PRAWAS)
		{
			visited[i]++;
			week_visitied[i]++;
			if (found)
			{
				found = false;
				for (int ii = count-1; ii >= 0;ii--)
				{
					week_visitied[prawas_karyakarta_index[ii]]++;
				}

			}
						
			//num[count] = arr[i];
			strcpy(prawas[count], karykarta[i]);
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
	char prawas[8][256] = {0};
	int prawas_karyakarta_index[8] = { 0 };
	int count = 0;
	check(count, 0, prawas, prawas_karyakarta_index);

	return 0;
}
