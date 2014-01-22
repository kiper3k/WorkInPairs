int min(int &array)
{
     int length = array.size( );  // establish size of array
     int min = array[0];       // start with max = first element

     for(int i = 1; i<length; i++)
     {
          if(array[i] < min)
                min = array[i];
     }
     return min;                // return min value in array
}