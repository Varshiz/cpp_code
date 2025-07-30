//did again previous code

#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>size,parent;
    public:
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1);

        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }

    int ultimateParent(int node){
        if(parent[node]==node)return node;
        return parent[node]=ultimateParent(parent[node]);
    }

    void unionBySize(int u,int v){
        int ultimateP_u=ultimateParent(u);
        int ultimateP_v=ultimateParent(v);

        if(ultimateP_u==ultimateP_v)return;
        
        if (size[ultimateP_u] > size[ultimateP_v]) {
            parent[ultimateP_v] = ultimateP_u;
            size[ultimateP_u] += size[ultimateP_v];
        } else {
            parent[ultimateP_u] = ultimateP_v;
            size[ultimateP_v] += size[ultimateP_u];
        }
        
    }
};

int main(){
    DisjointSet ds(7);
    ds.unionBySize(1,2);
ds.unionBySize(2,3);
ds.unionBySize(4,5);
ds.unionBySize(6,7); 
ds.unionBySize(5,6);

//check is 3 and 7 belong to same or not
if(ds.ultimateParent(3)==ds.ultimateParent(7))cout<<"Same\n";
else cout<<"Not Same\n";

ds.unionBySize(3,7);

if(ds.ultimateParent(3)==ds.ultimateParent(7))cout<<"Same\n";
else cout<<"Not Same\n";
}