//
//  MovePopViewController.h
//  GuangXiOA
//
//  Created by apple on 13-1-17.
//  Copyright (c) 2013年 深圳市博安达软件开发有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MovePopViewControllerDelegate;

@interface MovePopViewController : UITableViewController

@property (nonatomic, strong) NSMutableArray *resultArray;
@property (nonatomic, weak) id<MovePopViewControllerDelegate> delegate;

@end

@protocol MovePopViewControllerDelegate <NSObject>

- (void)didSelectedRow:(NSInteger)row;

@end