//
//  ViewController.h
//  MySearchScreenApp
//
//  Created by Shereef Marzouk on 10/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UITableViewController <UISearchBarDelegate> {
    NSMutableArray *dataSource; //will be storing all the data
    NSMutableArray *tableData;//will be storing data that will be displayed in table
    NSMutableArray *searchedData;//will be storing data matching with the search string
    UISearchBar *sBar;//search bar
}
@property(nonatomic,retain)NSMutableArray *dataSource;

@end
