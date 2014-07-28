//
//  DetailViewController.h
//  ExistingProject
//
//  Created by Felipe Ramos on 28/07/14.
//  Copyright (c) 2014 Felipe Ramos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
