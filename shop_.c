#include <stdio.h>

int main()
{
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int utensils_soap;
    int hair_soap;
    int face_wash;
    int hair_spray;
    int perfume;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int flour;
    int wheat;
    int turmeric;

    int pepsi;
    int sprite;
    int dew;
    int seven_up;
    int coco_cola;
    int mojitos;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("----------------------------\n");
    printf("BILLING SYSTEM\n");
    printf("----------------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%s",&name);
    printf("Customer Number : ");
    scanf("%d",&phone_number);
    printf("Customer Id : ");
    scanf("%d",&customer_id);

    printf("----------------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap ( Rs 10 ) : ");
    scanf("%d",&body_soap);
    printf("Utensils Soap; ( Rs 10 ) : ");
    scanf("%d",&utensils_soap);
    printf("Hair Soap ( Rs 10 ) : ");
    scanf("%d",&hair_soap);
    printf("Face Wash ( Rs 45 ) : ");
    scanf("%d",&face_wash);
    printf("Hair Spray ( Rs 100 ) : ");
    scanf("%d",&hair_spray);
    printf("Perfume ( Rs 290 ) : ");
    scanf("%d",&perfume);

    printf("----------------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar ( Rs 44 ) : ");
    scanf("%d",&sugar);
    printf("Tea ( Rs 20 ) : ");
    scanf("%d",&tea);
    printf("Coffee ( Rs 50 ) : ");
    scanf("%d",&coffee);
    printf("Rice ( Rs 99 ) : ");
    scanf("%d",&rice);
    printf("flour ( Rs 33 ) : ");
    scanf("%d",&flour);
    printf("Wheat ( Rs 56 ) : ");
    scanf("%d",&wheat);
    printf("Turmeric ( Rs 100 ) : ");
    scanf("%d",&turmeric);

     printf("----------------------------\n");

    printf("BEVERAGES\n\n");

    printf("PEPSI (Rs 90 ): ");
    scanf("%d",&pepsi);
    printf("Sprite (Rs 90 ): ");
    scanf("%d",&sprite);
    printf("Dew (Rs 90 ): ");
    scanf("%d",&dew);
    printf("Seven Up (Rs 90 ): ");
    scanf("%d",&seven_up);
    printf("Coco Cola (Rs 90 ): ");
    scanf("%d",&coco_cola);
    printf("Mojitos (Rs 30 ): ");
    scanf("%d",&mojitos);

    printf("----------------------------\n");

    int boso;
    int us;
    int hs;
    int fw;
    int hsp;
    int per;

    boso = 10 * body_soap;
    us = 10 * utensils_soap;
    hs = 10 * hair_soap;
    fw = 45 * face_wash;
    hsp = 100 * hair_spray;
    per = 290 * perfume;
    cosmetics_total = boso + us + hs + fw + hsp + per;
    

    printf("Body Soap : ");
    printf("%d Rs\n", boso);
    printf("Utensils Soap : ");
    printf("%d Rs\n", utensils_soap);
    printf("Hair Soap : ");
    printf("%d Rs\n", hair_soap);
    printf("Face Soap : ");
    printf("%d Rs\n", face_wash);
    printf("Hair Spray : ");
    printf("%d Rs\n", hair_spray);
    printf("Perfume : ");
    printf("%d Rs\n", perfume);

     printf("----------------------------\n");

     int s;
     int t;
     int c;
     int r;
     int f;
     int w;
     int tu;

     s = 44 * sugar;
     t = 20 *tea;
     c = 50 * coffee;
     r = 99 * rice;
     f = 33 * flour;
     w = 56 * wheat;
     tu = 100 * turmeric;
     grocery_total = s + t + c + r + f + w + tu;

     printf("Sugar : ");
    printf("%d Rs\n", sugar);
    printf("Tea : ");
    printf("%d Rs\n", tea);
    printf("Coffee : ");
    printf("%d Rs\n", coffee);
    printf("Rice : ");
    printf("%d Rs\n", rice);
    printf("Flour : ");
    printf("%d Rs\n", flour);
    printf("Wheat : ");
    printf("%d Rs\n", wheat);
    printf("Turmeric : ");
    printf("%d Rs\n", turmeric);

    printf("----------------------------\n");

    int p;
    int sp;
    int d;
    int se;
    int cc;
    int m;

    p = 90 * pepsi;
    sp = 90 * sprite;
    d = 90 * dew;
    se = 90 * seven_up;
    cc = 90 * coco_cola;
    m = 30 * mojitos;
    beverage_total = p + sp + d + se + cc + m;

    printf("Pepsi : ");
    printf("%d Rs\n", pepsi);
    printf("Sprite : ");
    printf("%d Rs\n", sprite);
    printf("Dew : ");
    printf("%d Rs\n", dew);
    printf("Seven Up : ");
    printf("%d Rs\n", seven_up);
    printf("Coco Cola : ");
    printf("%d Rs\n", coco_cola);
    printf("Mojitos : ");
    printf("%d Rs\n", mojitos);

    printf("----------------------------\n");

    total = cosmetics_total + beverage_total + grocery_total;

    printf("Total Amount : ");
    printf("%d RS\n", total);

    printf("----------------------------\n");

    printf("--------------------------------------------------------\n");

    printf("APNA STORE\n\n");

    printf("Customer Name : ");
    printf("%s\n",name);
    printf("Customer Phone Number : ");
    printf("%d\n",phone_number);
    printf("Customer Id : ");
    printf("%d\n",customer_id);

    printf("Product Name                                                 Quantity                                                 Price\n\n");
    printf("Body Soap                                                       %d                                                    %d\n",body_soap,boso);
    printf("Utensils Soap                                                   %d                                                    %d\n",utensils_soap,us);
    printf("Hair Soap                                                       %d                                                    %d\n",hair_soap,hs); 
    printf("Face Wash                                                       %d                                                    %d\n",face_wash,fw);
    printf("Hair Spray                                                      %d                                                    %d\n",hair_spray,hsp);
    printf("Perfume                                                         %d                                                    %d\n",utensils_soap,us);
    printf("Hair Soap                                                       %d                                                    %d\n",perfume,per);
    printf("Sugar                                                           %d                                                    %d\n",sugar,s);
    printf("Tea                                                             %d                                                    %d\n",tea,t);
    printf("Coffee                                                          %d                                                    %d\n",coffee,c);
    printf("Rice                                                            %d                                                    %d\n",rice,r);
    printf("Flour                                                           %d                                                    %d\n",flour,f);
    printf("Wheat                                                           %d                                                    %d\n",wheat,w);
    printf("Turmeric                                                        %d                                                    %d\n",turmeric,tu);
    printf("Pepsi                                                           %d                                                    %d\n",pepsi,p);
    printf("Sprite                                                          %d                                                    %d\n",sprite,sp);
    printf("Dew                                                             %d                                                    %d\n",dew,d);
    printf("Seven Up                                                        %d                                                    %d\n",seven_up,se);
    printf("Coco Cola                                                       %d                                                    %d\n",coco_cola,cc);
    printf("Mojitos                                                         %d                                                    %d\n",mojitos,m);
    

    printf("Grocery Total Price : %d\n\n", grocery_total);

    printf("Cosmetic Total Price : %d\n\n", cosmetics_total);

    printf("Beverage Total Price : %d\n\n", beverage_total);

    printf("Total Price : %d\n\n", total);

    printf("Prepared by SHIVAM PATEL , Thank you!!\n");
    printf("See You Soon!!\n");

    printf("--------------------------------------------------------\n");

    return 0;

}