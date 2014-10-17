//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Matt Postema on 10/9/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName ;
@property BOOL completed ;
@property (readonly) NSDate *creationDate ;

@end
