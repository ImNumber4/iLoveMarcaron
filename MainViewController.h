//
//  MainViewController.h
//  iLoveMarcaron
//
//  Created by Chaoqing LV on 10/20/13.
//  Copyright (c) 2013 xProject. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
