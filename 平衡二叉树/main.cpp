
    //ƽ������� ���ڵ�����������߶ȶ����
//��Ҫ�Ƚ�ÿһ�����ڵ�������߶�
//��Ҫ�õ�һ��С����  ����߶�
class Solution {
public:
    
    //���֮��ܴ���1
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
                  flag=IsBalanced_Solution(pRoot->left);//������ײ�
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
