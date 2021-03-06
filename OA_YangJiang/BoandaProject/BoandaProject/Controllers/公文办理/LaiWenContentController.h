//
//  LaiwenDetailController.h
//  GuangXiOA
//
//  Created by  on 11-12-29.
//  Copyright (c) 2011年 深圳市博安达软件开发有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSURLConnHelper.h"
#import "BaseViewController.h"

@interface LaiWenContentController : BaseViewController<NSURLConnHelperDelegate>
@property(nonatomic,strong) NSDictionary *jbxxDic;//基本信息
@property(nonatomic,strong) NSArray *wjxxAry; //附件信息
@property (nonatomic,strong) NSString *lwid;
@property (nonatomic,strong) NSString *LCSLBH;
@property (nonatomic,strong) NSArray *toDisplayKey;//发文信息所要显示的key
@property(nonatomic,strong) NSMutableArray *toDisplayHeightAry;
@property (nonatomic,strong) NSArray *stepAry;      //处理步骤
@property (nonatomic,strong) NSArray *stepHeightAry;//步骤的高度

@property (nonatomic,strong) IBOutlet UITableView *resTableView;

@property (nonatomic,strong) NSArray *toDisplayKeyTitle;//来文信息所要显示的key对应的标题
- (id)initWithNibName:(NSString *)nibNameOrNil andLWID:(NSString*)idstr;
@end
