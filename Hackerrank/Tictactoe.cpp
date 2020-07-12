#include<iostream>
using namespace std;
char me;
char enemy;
char b[3][3];
struct Move{
    int row;
    int column;
};
struct Move chaal;
int isterminal(int depth){
    int i,j,ct=0;
    for(i=0;i<3;i++){
        if(b[i][0]==b[i][1]&b[i][1]==b[i][2]){
            if(b[i][0]==me)return 20-depth;
            else if(b[i][0]==enemy)return -20-depth;
        }
    }
    for(j=0;j<3;j++){
        if(b[0][j]==b[1][j]&b[1][j]==b[2][j]){
            if(b[0][j]==me)return 20-depth;
            else if(b[0][j]==enemy)return -20-depth;
        }
            
    }
    if(b[0][0]==b[1][1]&b[1][1]==b[2][2]){
        if(b[0][0]==me)return 20-depth;
        else if(b[0][0]==enemy)return -20-depth;
    }
    if(b[2][0]==b[1][1]&b[1][1]==b[0][2]){
        if(b[2][0]==me)return 20-depth;
        else if(b[2][0]==enemy)return -20-depth;
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(b[i][j]!='_')
                ct++;
        }
    }
    return ct==9?0:-1;
}
int  minimax(char turn, int depth){
    int score = isterminal(depth);
    if(score!=-1)
        return score;
    else{
        int i,j,currentscore;
        if(turn==me){
            score=-20;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(b[i][j]=='_'){
                        b[i][j]=me;
                        currentscore = minimax(enemy, depth+1);
                        if(currentscore>score)
                            score = currentscore;
                        b[i][j] = '_';
                    }
                }
            }
        }
        else{
            score=20;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(b[i][j]=='_'){
                        b[i][j]=enemy;
                        currentscore = minimax(me, depth+1);
                        if(currentscore<score)
                            score = currentscore;
                        b[i][j] = '_';
                    }
                }
            }
        }
        return score;
    }
}
struct Move bestmove(int depth){
    struct Move move;
    move.row = -1;
    move.column = -1;
    int i, j, current, max=-20;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(b[i][j]=='_'){
                b[i][j] = me;
                current = minimax(enemy, depth+1);
                if(current>max){
                    max = current;
                    move.row = i;
                    move.column = j;
                }
                b[i][j] = '_';
            }
        }
    }
    return move;
}

int main(){
    int i,j,depth=0;
    cin>>me;
    enemy=me=='X'?'O':'X';
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
            if(b[i][j]!='_')
                depth++;
        }
            
    }
    chaal = bestmove(depth);
    cout<<chaal.row<<' '<<chaal.column;
    return 0;
}

