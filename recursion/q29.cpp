//rat in a maze

#include<iostream>
// #include<vector>
// #include<math.h>
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int oldx,int oldy,int newx,int newy,int maze[][4],int row,int col,vector<vector<bool>>&visited){
    if(
        (newx>=0 && newx<row) &&
        (newy>=0 && newy<col) &&
        maze[newx][newy]==1 &&
        visited[newx][newy]==0
    ){return true;}
    else return false;
}

void printpath(int maze[][4],int row,int col,int oldx,int oldy,string &output,vector<vector<bool>>&visited){
    //base case
    //detination address are [row-1] and [col-1]
    if(oldx==row-1 && oldy==col-1){
        cout<<output<<endl;
        return;
    }
    //UP
    int newx=oldx-1;
    int newy=oldy;
    if(isSafe(oldx,oldy,newx,newy,maze,row,col,visited)){
        //mark visited
       visited[newx][newy]=1;
       // call recursion
       output+='U';
       printpath(maze,row,col,newx,newy,output,visited);
       output.pop_back();
       visited[newx][newy]=0;

    }


    //RIGHT
     newx=oldx;
     newy=oldy+1;
    if(isSafe(oldx,oldy,newx,newy,maze,row,col,visited)){
        //mark visited
       visited[newx][newy]=1;
       // call recursion
       output+='R';
       printpath(maze,row,col,newx,newy,output,visited);
       output.pop_back();
       visited[newx][newy]=0;

    }

    //DOWN
    newx=oldx+1;
     newy=oldy;
    if(isSafe(oldx,oldy,newx,newy,maze,row,col,visited)){
        //mark visited
       visited[newx][newy]=1;
       // call recursion
       output+='D';
       printpath(maze,row,col,newx,newy,output,visited);
       output.pop_back();
       visited[newx][newy]=0;

    }

    //LEFT
     newx=oldx;
     newy=oldy-1;
    if(isSafe(oldx,oldy,newx,newy,maze,row,col,visited)){
        //mark visited
       visited[newx][newy]=1;
       // call recursion
       output+='L';
       printpath(maze,row,col,newx,newy,output,visited);
       output.pop_back();
       visited[newx][newy]=0;

    }
}
int main(){
    int maze[4][4]={{1,0,0,0},{1,1,0,0},{1,1,1,0},{1,1,1,1}};
    vector<vector<bool>>visited(4,vector<bool>(4,0));
    string output="";
    int oldx=0;
    int oldy=0;
    int row=4,col=4;
    printpath(maze,row,col,oldx,oldy,output,visited);

}