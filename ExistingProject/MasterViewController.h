//
//  MasterViewController.h
//  ExistingProject
//
//  Created by Felipe Ramos on 28/07/14.
//  Copyright (c) 2014 Felipe Ramos. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
