//
//  TLGroupCouponsListMineViewController.h
//  tongle
//
//  Created by jixiaofei-mac on 16/3/22.
//  Copyright © 2016年 com.isoftstone. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^homeBlack)();

@interface TLGroupCouponsListMineViewController : UITableViewController

@property (nonatomic,strong) homeBlack homeblack;

@end
