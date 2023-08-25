#include<bits/stdc++.h>

#include"RubiksCube.cpp"
#include"Representation/RubiksCube3dArray.cpp"
#include"DFSSolver.h"
using namespace std;
int main()
{
    RubiksCube3dArray object3darray;
    // object3darray.print();
    RubiksCube3dArray cube1;
    RubiksCube3dArray cube2;

    /*just trying some moves on cube*/
    // cube1.print();
    // cube2.l();
    // cube2.print();
    
    // cout<<"After"<<endl;
//     if(cube1==cube2)
//     {
//         cout<<"Cubes are equal";
//     }else{
//         cout<<"Cubes are not equal";
//     }
// }

    /*checking the functionality of equal operator*/
    // cube2=cube1;
    // cube1.print();
    // cube2.print();
    // cube2.l();

    /*checking the fucntionality of map*/
    // unordered_map<RubiksCube3dArray,bool,Hash3d>mp1;
    // mp1[cube1]=true;
    // if(mp1[cube1] && mp1[cube2])
    // {
    //     cout<<"Both cubes are present";
    // }
    // else{
    //     cout<<"One of the cubes is not present";
    // }

    /*now checking the functionality of dfs solver*/

//1)making this vector to store all the moves while shuffling it(times=3)
    vector<RubiksCube::MOVE> movestoShuffle=object3darray.randomShuffleCube(3);
    object3darray.print();
    for(auto move:movestoShuffle)
    {
        cout<<object3darray.getMove(move)<<" ";
    }
    cout<<endl;

//2)now shuffling is done and w are actually solving the cube
//making this vector to store all the moves taken to reach the answer
    DFSSolver<RubiksCube3dArray,Hash3d> dfsSolver(object3darray,5);//5->depth
    vector<RubiksCube::MOVE> movestoSolve=dfsSolver.solve();
    //cube solved is stored in dfs solver only
    dfsSolver.rubiksCube.print();
    for(auto move:movestoSolve)
    {
        cout<<object3darray.getMove(move)<<" ";
    }
    cout<<endl;

}