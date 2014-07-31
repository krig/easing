# Easing functions

> by Kristoffer Gronlund, 2014

Public domain

This work is a spiritual descendent (not to say derivative work) of works done by the following individuals:

* Warren Moore (https://github.com/warrenm)
* Robert Penner (http://www.robertpenner.com/easing/)
* George McGinley Smith (http://gsgd.co.uk/sandbox/jquery/easing/)
* James Padolsey (http://james.padolsey.com/demos/jquery/easing/)
* Authors of jQuery (http://plugins.jquery.com/project/Easing)
* Matt Gallagher (http://cocoawithlove.com/2008/09/parametric-acceleration-curves-in-core.html)
* Jesse Crossen (http://stackoverflow.com/questions/5161465/how-to-create-custom-easing-function-with-core-animation)

## Demo

<pre>

|                                                           x
|                                                        xx  
|                                                     xx     
|                                                  xx        
|                                               xx           
|                                            xx              
|                                         xx                 
|                                      xx                    
|                                   xxx                      
|                                xx                          
|                             xx                             
|                          xx                                
|                       xx                                   
|                    xx                                      
|                 xx                                         
|              xx                                            
|           xx                                               
|        xxx                                                 
|     xx                                                     
|  xx                                                        
|xx                                                          
+----------------------------------------------------- linear


|                                                            
|                                                          x 
|                                                         x  
|                                                       x    
|                                                      x     
|                                                    x       
|                                                  x         
|                                                x           
|                                              xx            
|                                            xx              
|                                          xx                
|                                        x                   
|                                      x                     
|                                   xx                       
|                                xx                          
|                             xx                             
|                          xx                                
|                      xxx                                   
|                  xxx                                       
|           xxxxx                                            
|xxxxxxxx                                                    
+------------------------------------------------ quadraticIn


|                                                     xxxxxxx
|                                             xxxxx          
|                                        xxx                 
|                                    xxx                     
|                                 xx                         
|                              xx                            
|                           xx                               
|                        xx                                  
|                      x                                     
|                    x                                       
|                 xx                                         
|               xx                                           
|             xx                                             
|            x                                               
|          x                                                 
|        x                                                   
|      x                                                     
|     x                                                      
|   x                                                        
|  x                                                         
|x                                                           
+----------------------------------------------- quadraticOut


|                                                       xxxxx
|                                                  xxx       
|                                              xx            
|                                           xx               
|                                         x                  
|                                       x                    
|                                     x                      
|                                   x                        
|                                 x                          
|                                x                           
|                              x                             
|                            x                               
|                           x                                
|                         x                                  
|                       x                                    
|                     x                                      
|                   x                                        
|                xx                                          
|             xx                                             
|        xxx                                                 
|xxxxxx                                                      
+--------------------------------------------- quadraticInOut


|                                                            
|                                                           x
|                                                          x 
|                                                         x  
|                                                        x   
|                                                            
|                                                     x      
|                                                    x       
|                                                   x        
|                                                 x          
|                                                x           
|                                              x             
|                                            x               
|                                          x                 
|                                        x                   
|                                     xx                     
|                                   xx                       
|                               xxx                          
|                           xxx                              
|                    xxxxx                                   
|xxxxxxxxxxxxxxxx                                            
+---------------------------------------------------- cubicIn


|                                             xxxxxxxxxxxxxxx
|                                    xxxxx                   
|                               xxx                          
|                           xxx                              
|                        xx                                  
|                      xx                                    
|                    x                                       
|                  x                                         
|                x                                           
|              x                                             
|            x                                               
|           x                                                
|         x                                                  
|        x                                                   
|       x                                                    
|                                                            
|    x                                                       
|   x                                                        
|  x                                                         
| x                                                          
|x                                                           
+--------------------------------------------------- cubicOut


|                                                   xxxxxxxxx
|                                             xxx            
|                                          xx                
|                                        x                   
|                                      x                     
|                                    x                       
|                                   x                        
|                                 x                          
|                                x                           
|                               x                            
|                              x                             
|                             x                              
|                            x                               
|                           x                                
|                         x                                  
|                        x                                   
|                      x                                     
|                    x                                       
|                 xx                                         
|             xxx                                            
|xxxxxxxxxx                                                  
+------------------------------------------------- cubicInOut


|                                                            
|                                                           x
|                                                            
|                                                            
|                                                         x  
|                                                        x   
|                                                       x    
|                                                      x     
|                                                     x      
|                                                    x       
|                                                            
|                                                 x          
|                                                x           
|                                              x             
|                                            xx              
|                                          xx                
|                                        x                   
|                                     xx                     
|                                 xxx                        
|                          xxxxx                             
|xxxxxxxxxxxxxxxxxxxxxx                                      
+-------------------------------------------------- quarticIn


|                                       xxxxxxxxxxxxxxxxxxxxx
|                              xxxxx                         
|                         xxx                                
|                      xx                                    
|                    x                                       
|                 xx                                         
|               xx                                           
|              x                                             
|            x                                               
|           x                                                
|                                                            
|        x                                                   
|       x                                                    
|      x                                                     
|     x                                                      
|    x                                                       
|   x                                                        
|                                                            
|                                                            
| x                                                          
|x                                                           
+------------------------------------------------- quarticOut


|                                                            
|                                                            
|                                                            
|                                                          x 
|                                                            
|                                                            
|                                                        x   
|                                                       x    
|                                                      x     
|                                                     x      
|                                                    x       
|                                                   x        
|                                                  x         
|                                                 x          
|                                               x            
|                                             xx             
|                                           xx               
|                                         x                  
|                                     xxx                    
|                               xxxx                         
|xxxxxxxxxxxxxxxxxxxxxxxxxxx                                 
+-------------------------------------------------- quinticIn


|                                  xxxxxxxxxxxxxxxxxxxxxxxxxx
|                          xxxx                              
|                     xxx                                    
|                   x                                        
|                xx                                          
|              xx                                            
|             x                                              
|           x                                                
|          x                                                 
|         x                                                  
|        x                                                   
|       x                                                    
|      x                                                     
|     x                                                      
|    x                                                       
|                                                            
|                                                            
|  x                                                         
|                                                            
|                                                            
|x                                                           
+------------------------------------------------- quinticOut


|                                             xxxxxxxxxxxxxxx
|                                        xxx                 
|                                      xx                    
|                                    x                       
|                                   x                        
|                                  x                         
|                                 x                          
|                                x                           
|                                                            
|                                                            
|                              x                             
|                                                            
|                                                            
|                            x                               
|                           x                                
|                          x                                 
|                         x                                  
|                        x                                   
|                     xx                                     
|                  xxx                                       
|xxxxxxxxxxxxxxxx                                            
+----------------------------------------------- quinticInOut


|                                                            
|                                                          x 
|                                                        x   
|                                                      x     
|                                                    x       
|                                                  xx        
|                                                xx          
|                                              xx            
|                                            x               
|                                          x                 
|                                        x                   
|                                     xx                     
|                                   xx                       
|                                 x                          
|                              xx                            
|                           xx                               
|                        xx                                  
|                    xxx                                     
|                xxx                                         
|          xxxxx                                             
|xxxxxxx                                                     
+----------------------------------------------------- sineIn


|                                                      xxxxxx
|                                              xxxxx         
|                                          xxx               
|                                      xxx                   
|                                   xx                       
|                                xx                          
|                             xx                             
|                           x                                
|                        xx                                  
|                      xx                                    
|                    x                                       
|                  x                                         
|                x                                           
|             xx                                             
|           xx                                               
|         xx                                                 
|        x                                                   
|      x                                                     
|    x                                                       
|  x                                                         
|x                                                           
+---------------------------------------------------- sineOut


|                                                        xxxx
|                                                   xx       
|                                               xx           
|                                            xx              
|                                          xx                
|                                        x                   
|                                      x                     
|                                    x                       
|                                  x                         
|                                x                           
|                              x                             
|                            x                               
|                          x                                 
|                        x                                   
|                      x                                     
|                    x                                       
|                 xx                                         
|               xx                                           
|            xx                                              
|        xx                                                  
|xxxxx                                                       
+-------------------------------------------------- sineInOut


|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                          x 
|                                                         x  
|                                                        x   
|                                                       x    
|                                                      x     
|                                                    x       
|                                                  x         
|                                                x           
|                                             xx             
|                                          xx                
|                                       xx                   
|                                   xxx                      
|                              xxxx                          
|                        xxxxx                               
|                xxxxxx                                      
|xxxxxxxxxxx                                                 
+------------------------------------------------- circularIn


|                                                  xxxxxxxxxx
|                                       xxxxxx               
|                                xxxxx                       
|                           xxxx                             
|                       xxx                                  
|                    xx                                      
|                 xx                                         
|              xx                                            
|            x                                               
|          x                                                 
|        x                                                   
|      x                                                     
|     x                                                      
|    x                                                       
|   x                                                        
|  x                                                         
|                                                            
|                                                            
|                                                            
|                                                            
|x                                                           
+------------------------------------------------ circularOut


|                                                     xxxxxxx
|                                              xxxx          
|                                         xxx                
|                                      xx                    
|                                    x                       
|                                  x                         
|                                                            
|                                                            
|                                                            
|                                                            
|                              x                             
|                                                            
|                                                            
|                                                            
|                                                            
|                          x                                 
|                        x                                   
|                     xx                                     
|                 xxx                                        
|           xxxx                                             
|xxxxxxxx                                                    
+---------------------------------------------- circularInOut


|                                                            
|                                                            
|                                                           x
|                                                            
|                                                          x 
|                                                            
|                                                         x  
|                                                            
|                                                            
|                                                       x    
|                                                      x     
|                                                     x      
|                                                    x       
|                                                   x        
|                                                  x         
|                                                x           
|                                              x             
|                                           xx               
|                                       xxx                  
|                               xxxxxx                       
|xxxxxxxxxxxxxxxxxxxxxxxxx                                   
+---------------------------------------------- exponentialIn


|                                    xxxxxxxxxxxxxxxxxxxxxxxx
|                        xxxxxx                              
|                   xxx                                      
|                xx                                          
|              x                                             
|            x                                               
|          x                                                 
|         x                                                  
|        x                                                   
|       x                                                    
|      x                                                     
|     x                                                      
|                                                            
|                                                            
|   x                                                        
|                                                            
|  x                                                         
|                                                            
| x                                                          
|                                                            
|x                                                           
+--------------------------------------------- exponentialOut


|                                             xxxxxxxxxxxxxxx
|                                       xxx                  
|                                     x                      
|                                   x                        
|                                  x                         
|                                 x                          
|                                x                           
|                                                            
|                               x                            
|                                                            
|                              x                             
|                                                            
|                             x                              
|                                                            
|                            x                               
|                           x                                
|                          x                                 
|                         x                                  
|                       x                                    
|                   xxx                                      
|xxxxxxxxxxxxxxxx                                            
+------------------------------------------- exponentialInOut


|                                                            
|                                                            
|                                                            
|                                                           x
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                        xx  x               
|                                       x                    
|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       x        x             
+-------------------------------------------------- elasticIn
                                 xxxx           x            
                                                             
                                                 x           
                                                             
                                                             
                                                   x         
                                                    xx       
                                                             
                                                             
         xx                                                  
           x                                                 
                                                             
                                                             
             x                                               
                                                             
              x           xxxx                               
|              x        x       xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
|                     x                                      
|                x  xx                                       
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
|                                                            
| x                                                          
|                                                            
|                                                            
|x                                                           
+------------------------------------------------- elasticOut

                                                             
                                    x                        
                                  x                          
                                                             
|                                     x   xx  xxxxxxxxxxxxxxx
|                                x     xxx                   
|                                                            
|                                                            
|                                                            
|                                                            
|                               x                            
|                                                            
|                                                            
|                                                            
|                              x                             
|                                                            
|                                                            
|                                                            
|                             x                              
|                                                            
|                                                            
|                                                            
|                                                            
|                    xxx     x                               
|xxxxxxxxxxxxxxxx  xx   x                                    
+----------------------------------------------- elasticInOut
                                                             
                            x                                
                          x                                  
                                                             

|                                                            
|                                                            
|                                                           x
|                                                            
|                                                          x 
|                                                            
|                                                         x  
|                                                            
|                                                            
|                                                            
|                                                            
|                                                      x     
|                                                            
|                                                            
|                                                    x       
|                                                            
|                                                            
|                                                  x         
|                                                 x          
|                                                x           
|xxxxx                                          x            
+----------------------------------------------------- backIn
        xxx                                    x             
            xx                                x              
               xx                            x               
                  xx                        x                
                    xx                    x                  
                       xxx              x                    
                           xxx      xxx                      
                                                             
                                                             
                        xxx      xxx                         
                      x              xxx                     
                    x                    xx                  
                  x                        xx                
                 x                            xx             
                x                                xx          
               x                                    xxx      
|             x                                          xxxx
|            x                                               
|           x                                                
|          x                                                 
|                                                            
|                                                            
|        x                                                   
|                                                            
|                                                            
|      x                                                     
|                                                            
|                                                            
|                                                            
|                                                            
|   x                                                        
|                                                            
|  x                                                         
|                                                            
| x                                                          
|                                                            
|x                                                           
+---------------------------------------------------- backOut

                                            xxx              
                                         xx      xx          
                                        x           xx       
                                                       xx    
|                                                         xxx
|                                                            
|                                                            
|                                  x                         
|                                                            
|                                                            
|                                x                           
|                                                            
|                               x                            
|                                                            
|                              x                             
|                                                            
|                             x                              
|                                                            
|                            x                               
|                                                            
|                                                            
|                          x                                 
|                                                            
|                                                            
|xxxx                                                        
+-------------------------------------------------- backInOut
      xx                                                     
         xx           x                                      
            xx      xx                                       
                xxx                                          

|                                                          xx
|                                                       xx   
|                                                     x      
|                                                    x       
|                                                  x         
|                                                 x          
|                                                x           
|                                               x            
|                                              x             
|                                                            
|                                                            
|                                            x               
|                                           x                
|                                                            
|                         xxxxx                              
|                       x       xx        x                  
|                     x            x                         
|                                   x    x                   
|          xxx                       x                       
|        x     xx x                   x                      
|xx   xx         x                     x                     
+--------------------------------------------------- bounceIn
                                                             

|                      x                     x         xx   x
|                       x                   x xx     x       
|                        x                       xxx         
|                    x    x              x                   
|                          x            x                    
|                   x        xx       x                      
|                               xxxxx                        
|                                                            
|                 x                                          
|                x                                           
|                                                            
|                                                            
|              x                                             
|             x                                              
|            x                                               
|           x                                                
|          x                                                 
|        x                                                   
|       x                                                    
|    xx                                                      
|xxx                                                         
+-------------------------------------------------- bounceOut


|                                         x          x    xxx
|                                          x        x  xx    
|                                           x     x          
|                                       x     xxxx           
|                                                            
|                                                            
|                                     x                      
|                                    x                       
|                                   x                        
|                                 x                          
|                             xxx                            
|                           x                                
|                         x                                  
|                        x                                   
|                       x                                    
|                                                            
|                                                            
|            xxxx     x                                      
|          xx     x                                          
|     xx  x        x                                         
|xxxx    x          x                                        
+------------------------------------------------ bounceInOut
                                                             
</pre>
