//
//  SlideView.h
//  MMPerson
//
//  Created by WDTechnology on 15/8/2.
//  Copyright (c) 2015年 WDTechnology. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ContainModel,MMCollectionViewCell;
@interface SlideView : UIScrollView

@property(assign,nonatomic)UIViewController *vc;

@property(retain,nonatomic)NSMutableArray *itemArray;

-(instancetype)initWithViewController:(UIViewController *)viewContoller;

-(void)chooseContainModel:(ContainModel *)containModel withCollectionViewCell:(MMCollectionViewCell*)collectionCell;
/**
 *  将当前查看的数据模型置为nil
 */
-(void)changeSeeModel;
@end
