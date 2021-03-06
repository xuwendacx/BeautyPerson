//
//  AlbumShowCollectionView.h
//  MMPerson
//
//  Created by WDTechnology on 15/11/18.
//  Copyright © 2015年 WDTechnology. All rights reserved.
//

#import "BaseCollectionView.h"

typedef void(^scrollPositionOffset)(NSInteger page);


@interface AlbumShowCollectionView : BaseCollectionView

@property(copy ,nonatomic)scrollPositionOffset offsetBlock;

/**
 *  写入图片到相册
 */
-(void)writeImageToAlbum;

@end
