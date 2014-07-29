//
//  BPDDetailViewController.h
//  ControllingSource
//
//  Created by Antonio Silva on 29/07/14.
//  Copyright (c) 2014 Antonio Silva. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BPDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
