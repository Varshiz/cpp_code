// Disjoint set
//reusable snippet of : class DisjointSet

#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>rank,parent;
    //is is better to use size instead of rank;
    //ulp_u : ultimate parent of u
    vector<int>size;

    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }

    int findUlPar(int node){
        if(node==parent[node])return node;

        return parent[node]=findUlPar(parent[node]);
    }

    void unionByRank(int u,int v){
        int ulp_u=findUlPar(u);
        int ulp_v=findUlPar(v);

        if(ulp_u==ulp_v)return;

        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            // parent[ulp_u]=ulp_v;  we can do this too;
            rank[ulp_u]++;
        }       

    }

    void unionBySize(int u,int v){
        int ulp_u=findUlPar(u);
        int ulp_v=findUlPar(v);

        if(ulp_u==ulp_v)return;

        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v]; 
        }       

    }
};



int main(){
DisjointSet ds(7);

// ds.unionByRank(1,2);
// ds.unionByRank(2,3);
// ds.unionByRank(4,5);
// ds.unionByRank(6,7); 
// ds.unionByRank(5,6);

// //check is 3 and 7 belong to same or not
// if(ds.findUlPar(3)==ds.findUlPar(7))cout<<"Same\n";
// else cout<<"Not Same\n";

// ds.unionByRank(3,7);

// if(ds.findUlPar(3)==ds.findUlPar(7))cout<<"Same\n";
// else cout<<"Not Same\n";



ds.unionBySize(1,2);
ds.unionBySize(2,3);
ds.unionBySize(4,5);
ds.unionBySize(6,7); 
ds.unionBySize(5,6);

//check is 3 and 7 belong to same or not
if(ds.findUlPar(3)==ds.findUlPar(7))cout<<"Same\n";
else cout<<"Not Same\n";

ds.unionBySize(3,7);

if(ds.findUlPar(3)==ds.findUlPar(7))cout<<"Same\n";
else cout<<"Not Same\n";



}