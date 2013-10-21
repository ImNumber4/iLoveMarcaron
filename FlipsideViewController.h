//
//  FlipsideViewController.h
//  iLoveMarcaron
//
//  Created by Chaoqing LV on 10/20/13.
//  Copyright (c) 2013 xProject. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
