//
//  DetailViewController.h
//  master_detail_update
//
//  Created by Yan Saraev on 11/21/13.
//  Copyright (c) 2013 Yan Saraev. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DetailViewControllerDelegate <NSObject>

-(void)itemHasBeenChanged:(id)edittedObject;

@end

@class MasterViewController;

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) NSMutableDictionary* detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UIButton *editButton;


@property (weak,nonatomic) MasterViewController <DetailViewControllerDelegate> *delegate;

-(IBAction)editPressed:(id)sender;

@end
