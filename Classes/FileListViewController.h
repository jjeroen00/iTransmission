//
//  FileListViewController.h
//  iTransmission
//
//  Created by Mike Chen on 7/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StatisticsViewController.h"
#import "CheckboxControl.h"

@class Torrent, FileListCell;
@interface FileListViewController : StatisticsViewController <CheckboxControlDelegate,UITableViewDataSource, UITableViewDelegate>
{
    Torrent *fTorrent;
    UITableView *fTableView;
}
@property (nonatomic, readonly) Torrent *torrent;
@property (nonatomic, retain) IBOutlet UITableView *tableView;

- (id)initWithTorrent:(Torrent*)t;
- (void)updateCell:(FileListCell*)cell;

@end
