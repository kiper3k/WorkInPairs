int max(int array)
{
     int length = array.size( );  // establish size of array
     int max = array[0];       // start with max = first element

     for(int i = 1; i<length; i++)
     {
          if(array[i] > max)
                max = array[i];
     }
     return max;                // return max value in array
}