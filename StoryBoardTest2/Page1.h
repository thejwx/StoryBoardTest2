//
//  Page1.h
//  StoryBoardTest2
//
//  Created by Jeff Wilson on 12/4/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Page1 : UIViewController

- (IBAction)saveModal:(NSString *)something;
@property (weak, nonatomic) IBOutlet UILabel *theLabel;

@end
