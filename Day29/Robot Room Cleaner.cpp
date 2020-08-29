class Solution {
public:
       void cleanRoom(Robot& robot) {
        unordered_set<string> visited;
        
        dfs(robot, 0, 0, 0, visited);
    }
    
    
    void dfs(Robot & robot, int sx, int sy, int dir, unordered_set<string> & visited) {
        robot.clean();
        string encode = to_string(sx) + ","+ to_string(sy);
        visited.insert(encode);
        vector<int> dx = {1, 0, -1, 0};
        vector<int> dy = {0, 1, 0, -1};
        
        for(int i = 0; i < 4; ++i) {
            int new_dir = (dir + i) % 4;
            int xx = sx + dx[new_dir];
            int yy = sy + dy[new_dir];
            string encode1 = to_string(xx) + ","+ to_string(yy);
            if(visited.find(encode1) == visited.end() && robot.move()) {
            
                dfs(robot, xx, yy, new_dir, visited);
                robot.turnLeft();
                robot.turnLeft();
                robot.move();
                robot.turnRight();
                robot.turnRight();
            }
            
            robot.turnRight();
        }
    }
};
