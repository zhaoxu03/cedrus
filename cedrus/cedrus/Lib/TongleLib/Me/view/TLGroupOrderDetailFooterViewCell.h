//
//  TLGroupOrderDetailFooterViewCell.h
//  tongle
//
//  Created by jixiaofei-mac on 16/3/22.
//  Copyright © 2016年 com.isoftstone. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TLGroupOrderBase;


@interface TLGroupOrderDetailFooterViewCell : UITableViewCell

@property (nonatomic,strong) TLGroupOrderBase *groupOrderBase;

+(instancetype)cellWithTableView:(UITableView *)tableview;

@end