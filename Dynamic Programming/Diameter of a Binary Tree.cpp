
class Solution {
  public:
  int height(Node* root)
  {
      if(root==NULL)
      return 0;
      else
      
      return 1+max(height(root->left),height(root->right));
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        if(root==NULL)
        return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        //cout<<lh<<" "<<rh;
        int th=1+lh+rh;
       // cout<<th;
        
        int dl=diameter(root->left);
        int dr=diameter(root->right);
        
        int dmax=max(dl,dr);
        
        int res=max(th,dmax);
        return res;
        // Your code here
    }
};