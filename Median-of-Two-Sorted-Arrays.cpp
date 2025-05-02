class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
   
\tint n1 = a.size() ; 
\tint n2 = b.size() ;
    if(n1>n2) return findMedianSortedArrays(b,a) ; 
\tint n = n1+n2 ;  
    int left = (n1+n2+1) /2 ; 
    int l = 0 ; 
    int h = n1 ; 
    while(l<=h){
        int m1 = (l+h) >>1 ; 
        int m2 = left - m1 ; 
        int l1 = INT_MIN ;
        int l2 = INT_MIN ;
        int r1 = INT_MAX ;
        int r2 = INT_MAX ; 
        if(m1<n1) r1 = a[m1] ; 
        if(m2<n2) r2 = b[m2] ; 
        if(m1-1 >=0) l1 = a[m1 -1 ] ; 
        if(m2 -1 >= 0) l2 = b[m2 -1] ; 
        if(l1<=r2 && l2<=r1){
            if(n%2==1){
                return max(l1,l2) ; 
            }else{
                return ((double)(max(l1, l2) + min(r1, r2))) / 2.0; 
            }

        }
        else if(l1>r2) h = m1-1 ; 
        else l = m1+1 ; 
    }
    return 0 ; 
}
    
};