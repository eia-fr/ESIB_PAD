//
//  OverlayViewController.h
//  TableView
//
//  Created by iPhone SDK Articles on 1/17/09.
//  Copyright www.iPhoneSDKArticles.com 2009. 
//

#import <UIKit/UIKit.h>

@class SearchOnMapTableViewController;
@interface OverlayViewController : UIViewController {

	SearchOnMapTableViewController * rvController;
}

@property (nonatomic, retain) SearchOnMapTableViewController * rvController;

@end
