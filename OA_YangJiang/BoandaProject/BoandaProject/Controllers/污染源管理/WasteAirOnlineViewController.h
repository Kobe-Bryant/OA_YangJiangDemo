//
//  WasteAirOnlineViewController.h
//  BoandaProject
//
//  Created by 曾静 on 13-12-5.
//  Copyright (c) 2013年 深圳市博安达软件开发有限公司. All rights reserved.
//

#import "BaseViewController.h"
#import "OtherFactorListViewController.h"

@interface WasteAirOnlineViewController : BaseViewController<UIWebViewDelegate, ChooseFactorDelegate>

@property (nonatomic, copy) NSString *WRYMC;
@property (nonatomic, copy) NSString *PSCODE;

@end
