//
//  MasterViewController.h
//  master_detail_update
//
//  Created by Yan Saraev on 11/21/13.
//  Copyright (c) 2013 Yan Saraev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"


@interface MasterViewController : UITableViewController <DetailViewControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;
@property	NSMutableArray *objects;



@end
