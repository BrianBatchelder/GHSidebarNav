//
//  GHMenuViewController.h
//  GHSidebarNav
//
//  Created by Greg Haines on 1/3/12.
//  Copyright (c) 2012 Greg Haines. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GHRevealViewController;

@interface GHMenuViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

- (id)initWithSidebarViewController:(GHRevealViewController *)sidebarVC
					  withSearchBar:(UISearchBar *)searchBar
						withHeaders:(NSArray *)headers
					withControllers:(NSArray *)controllers
					  withCellInfos:(NSArray *)cellInfos;

- (id)initWithSidebarViewController:(GHRevealViewController *)sidebarVC
					  withSearchBar:(UISearchBar *)searchBar 
						withHeaders:(NSArray *)headers 
					withControllers:(NSArray *)controllers 
					  withCellInfos:(NSArray *)cellInfos
          showControllerAtIndexPath:(NSIndexPath *) indexPath;

- (void)selectRowAtIndexPath:(NSIndexPath *)indexPath 
					animated:(BOOL)animated 
			  scrollPosition:(UITableViewScrollPosition)scrollPosition;

- (void)showControllerInSection:(NSInteger)section atRow:(NSInteger)row;

- (UIViewController *)controllerForIndexPath:(NSIndexPath *)indexPath;


@end
