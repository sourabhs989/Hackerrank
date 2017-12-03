//Top view problem - Data structures:Trees

void leftside(node * root) {

   if(root->left!=NULL)
   {
       leftside(root->left);
       
   }
       cout<<root->data<<" ";
    
    return;
  
}

void rightside(node * root) {
           cout<<root->data<<" ";

   if(root->right!=NULL)
   {    
       
       rightside(root->right);
       
   }
      
    
    return;
  
}

void topView(node * root)
{
    leftside(root);
    if(root->right!=NULL)
    rightside(root->right);
}
