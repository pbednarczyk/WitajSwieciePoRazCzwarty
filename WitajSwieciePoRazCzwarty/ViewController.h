//
//  ViewController.h
//  WitajSwieciePoRazCzwarty
//
//  Created by Pawel Bednarczyk on 02.08.2014.
//  Copyright (c) 2014 iOSTutki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController <UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;

@end
