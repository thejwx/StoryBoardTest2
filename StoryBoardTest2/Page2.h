//
//  Page2.h
//  StoryBoardTest2
//
//  Created by Jeff Wilson on 12/4/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol Page2Delegate <NSObject>
- (void) saveModal: (NSString *)something;
@end

@interface Page2 : UIViewController{
    __weak NSString *labelText;
    __weak id <Page2Delegate> delegate;
}
- (IBAction)closeModal:(id)sender;
- (IBAction)saveModal:(id)sender something:(NSString *)something;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak) NSString *labelText;
@property (weak) id delegate;

@end

