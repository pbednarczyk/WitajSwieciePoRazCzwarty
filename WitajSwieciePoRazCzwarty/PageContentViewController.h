//
//  PageContentViewController.h
//  WitajSwieciePoRazCzwarty
//
//  Created by Pawel Bednarczyk on 02.08.2014.
//  Copyright (c) 2014 iOSTutki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property NSUInteger pageIndex;
@property NSString *titleText;

@end
