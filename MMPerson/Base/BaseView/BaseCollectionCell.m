//
//  BaseCollectionCell.m
//  MMPerson
//
//  Created by 徐文达 on 15/11/5.
//  Copyright © 2015年 徐文达. All rights reserved.
//

#import "BaseCollectionCell.h"

@implementation BaseCollectionCell

+(instancetype)cellWithCollectionView:(UICollectionView *)collectionView withIndexPath:(NSIndexPath *)path{
    
    static NSString *cellId=@"BaseCollectionCell";
    
    [collectionView registerNib:[UINib nibWithNibName:cellId bundle:nil] forCellWithReuseIdentifier:cellId];
    
    BaseCollectionCell *cell=[collectionView dequeueReusableCellWithReuseIdentifier:cellId forIndexPath:path];
    
    if (!cell) {
        cell=[[[NSBundle mainBundle] loadNibNamed:cellId owner:nil options:nil] lastObject];
    }
    
    return cell;
    
}


- (void)awakeFromNib {
    
}

@end
