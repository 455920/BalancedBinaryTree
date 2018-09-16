
    //平衡二叉树 根节点的左右子树高度都相等
//需要比较每一个根节点的子树高度
//需要用到一个小函数  计算高度
class Solution {
public:
    
    //深度之差不能大于1
     int RootDepth(TreeNode* pRoot)
     {
        if(pRoot==NULL)
            return 0;
         int DepthLeft = RootDepth(pRoot->left);
         int DepthRight = RootDepth(pRoot->right);
             if(DepthLeft>DepthRight)
             {
                 return DepthLeft+1;
             }
             return DepthRight+1;
     }
    

  
  


   

    bool IsBalanced_Solution(TreeNode* pRoot) 
 
   {    bool flag=true;
                 if(pRoot==NULL)
                     return true;
                  flag=IsBalanced_Solution(pRoot->left);//先找最底层
        if(flag==false)
            return false;
                   flag= IsBalanced_Solution(pRoot->right);
                if(flag==false)
            return false;
                   int leftDepth=RootDepth(pRoot->left);
                   int DepthRight = RootDepth(pRoot->right);
                   if(leftDepth-DepthRight<=1&&leftDepth-DepthRight>=-1)
                       return true;
                  else
                      return false;
        }
    
};
