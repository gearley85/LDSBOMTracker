//
//  DetailViewController.h
//  BOMTracker
//
//  Created by Gavin Earley on 9/23/13.
//  Copyright (c) 2013 Gavin Earley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
