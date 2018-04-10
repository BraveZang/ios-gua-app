//
//  TGBaseTableView.h
//  TGVideo
//
//  Created by XFS_zang on 2018/4/9.
//  Copyright © 2018年 XFS_zang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"


@class TGBaseTableView;

@protocol TGBaseTableViewDelegate <NSObject>

@optional
//下拉刷新
- (void)QCBaseTableViewDidPullDownRefreshed:(TGBaseTableView *)tableView;

@end

@interface TGBaseTableView : UITableView<MJRefreshBaseViewDelegate>

- (id)initWithFrame:(CGRect)frame style:(UITableViewStyle)style refreshFooter:(BOOL)yesOrNo;

//结束刷新状态，请求结束时调用
- (void)reloadDeals;

// 开始刷新
- (void)beginRefreshing;
@property (nonatomic,assign) id<TGBaseTableViewDelegate> refreshDelegate;
@property (nonatomic,assign) BOOL hasFooter;    //是否添加上拉加载视图
@property (nonatomic,assign) BOOL isRefresh;
@end
