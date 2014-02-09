//
//  PaisanPassDetailViewController.h
//  PaisanPass
//
//  Created by paisan on 2/9/14.
//  Copyright (c) 2014 paisan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PaisanPassDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
